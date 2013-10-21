//
//  countint.h
//  P22
//
//  Created by xiaoxiao zheng on 10/18/13.
//  Copyright (c) 2013 xiaoxiao zheng. All rights reserved.
//

#ifndef __P22__countint__
#define __P22__countint__

#include <iostream>
#include <iostream>

/** A class which counts the number of comparisons done
 *  to instances of the class.
 *  To reset the count to 0, call countint::clearcount()
 *  To inspect the current value of thecount, call countint::getcount()
 *  @author Paul Kube (c) 2010, 2011
 */
class countint {
public:
    countint(int i) : i(i) {}
    
    /** Clear (set to 0) the total comparison count of countints. */
    static void clearcount();
    
    /** Return the total comparison count of countints. */
    static unsigned long getcount();
    
    /** Return the value of this countint. */
    int getval() const;
    
    /** A call to any of the following comparison operators
     *  increments the countint comparison count.
     */
    
    bool operator<(countint const & o) const;
    
    bool operator<=(countint const & o) const;
    
    bool operator==(countint const & o) const;
    
    bool operator>(countint const & o) const;
    
    bool operator>=(countint const & o) const;
    
    bool operator!=(countint const & o) const;
    
private:
    int i; // the value of this countint
    static unsigned long count;  // to keep track of comparisons done to all countints
    
};

/** When printing a countint to an ostream, print its int value */
std::ostream& operator<<(std::ostream& stm, const countint& i);





#endif /* defined(__P22__countint__) */
