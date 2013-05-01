function route (pathname, response) {
	response.writeHead(404, {"Contect-Type": "text/plain"});
	response.write("404 not Found");
	response.end();
}

exports.route = route;
