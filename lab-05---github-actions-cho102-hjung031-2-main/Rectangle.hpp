#ifndef __RECTANGLE_HPP__
#define __RECTANGLE_HPP__

class Rectangle {
	public:
		Rectangle(int x, int y) {width = x; height = y;}
		int area() { return getWidth() * getHeight();}
		int perimeter() { return (2 * getWidth()) + (2 * getHeight());}
		int getWidth() {return width;}
		int getHeight() {return height;}
	
	private:
		int width;
		int height;
	
};

#endif
