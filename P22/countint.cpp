//
//  countint.cpp
//  P22
//
//  Created by xiaoxiao zheng on 10/18/13.
//  Copyright (c) 2013 xiaoxiao zheng. All rights reserved.
//

#include "countint.h"


/** Implementation of the countint class
 *  See: countint.hpp
 *  @author Paul Kube (c) 2010
 */

unsigned long countint::count = 0;  // define  static count variable

void countint::clearcount() {
    count = 0;
}

unsigned long countint::getcount() {
    return count;
}

int countint::getval() const {
    return i;
}

bool countint::operator<(countint const & o) const {
    count++;
    return i < o.i;
}

bool countint::operator<=(countint const & o) const {
    count++;
    return i <= o.i;
}

bool countint::operator==(countint const & o) const {
    count++;
    return i == o.i;
}

bool countint::operator>(countint const & o) const {
    count++;
    return i > o.i;
}

bool countint::operator>=(countint const & o) const {
    count++;
    return i >= o.i;
}

bool countint::operator!=(countint const & o) const {
    count++;
    return i != o.i;
}

std::ostream& operator<<(std::ostream& stm, const countint& i) {
    stm << i.getval();
    return stm;
}

