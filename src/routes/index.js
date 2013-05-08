
/*
 * GET home page.
 */
Citys = new Array();
Citys = ["NewYork", "FoShan", "New Wales"];
Countrys = ['China', 'England', 'America'];


exports.index = function(req, res){
  res.render('pay', { title: 'Express', Citys: Citys, Countrys: Countrys });
};
