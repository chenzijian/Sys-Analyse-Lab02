var http = require("http");
var url = require("url");

function start (route) {
	function onRequest (request, response) {
		var pathname = url.parse(request.url).pathname;
		console.log ("Request fot " + pathname + " received.");
		route (pathname, response);
	}
	
	http.createServer(onRequest).listen (8888);
	console.log("Server started.");
}

exports.start = start;
