/*
 * Filter_data.h
 *
 *  Created on: 19.01.2015
 *      Author: fnolden
 */

#include <string>
#include <sstream>
#include <iostream>
#include <cstdio>

#ifndef SRC_GUI_FILTER_DATA_H_
#define SRC_GUI_FILTER_DATA_H_

namespace image_cloud {

class Filter_value {
public:
	Filter_value();
	Filter_value(std::string name, int value, int max, int numerator, int denominator, bool negativ = false, bool is_float = true);
	~Filter_value();

	void init(std::string name, int value, int max, bool negativ = false);
	void init(std::string name, int value, int max, int numerator, int denominator, bool negativ = false, bool is_float = true);

	float get_value();
	bool is_initalised();
	bool negativ;
	int max;
	int numerator;
	int denominator;
	int value;
	bool initialised;
	bool is_float;
	std::string name;
};

} /* namespace image_cloud */

#endif /* SRC_GUI_FILTER_DATA_H_ */
