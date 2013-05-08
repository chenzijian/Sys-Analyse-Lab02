
/**
 * Module dependencies.
 */

var express = require('express')
  , routes = require('./routes')
  , user = require('./routes/user')
  , http = require('http')
  , path = require('path')
  , mysql = require('mysql');
var app = express();

var connection = mysql.createConnection({
	host	:	'localhost',
	user	:	'root',
	password:	'0',
});

connection.connect();
connection.query("USE nodejs_db");
connection.query('SELECT * FROM test', function(err,rows, fields){
	if (err) throw err;
	
	console.log(rows);
});

connection.end();




// all environments
app.set('port', process.env.PORT || 3000);
app.set('views', __dirname + '/views');
app.set('view engine', 'jade');
app.use(express.favicon());
app.use(express.logger('dev'));
app.use(express.bodyParser());
app.use(express.methodOverride());
app.use(app.router);
app.use(express.static(path.join(__dirname, 'public')));

// development only
if ('development' == app.get('env')) {
  app.use(express.errorHandler());
}

app.get('/', routes.index);
app.get('/users', user.list);
app.post('/', function(req,res) {	
//	res.send(req.body);
//	console.log(req.body);
	res.render('search', { title: 'EX'} );
});
http.createServer(app).listen(app.get('port'), function(){
  console.log('Express server listening on port ' + app.get('port'));
});
