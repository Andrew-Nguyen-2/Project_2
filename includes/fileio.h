/*
 *fileio.h
 * 
 * Created on: Sep 24, 2020
 * Author: Andrew
*/

#ifndef FILEIO_H_
#define FILEIO_H_

#include "../includes/constants.h"

#include <iostream>
#include <string>
#include <vector>

int loadData(const std::string filename, std::vector<process> &myProcesses);
int saveData(const std::string filename, std::vector<process> &myProcesses);

#endif /* FILEIO_H_ */



