
float theta(y) { 
	return asin(y/( sqrt(2))); 
}
void lat(y) { 
	return asin((2 * theta(y) + sin(2 * theta(y)))/Pi); 
}
void lon(x, y) { 
	return Pi x/(2 *  sqrt(2) cos(theta(y))); 
}
