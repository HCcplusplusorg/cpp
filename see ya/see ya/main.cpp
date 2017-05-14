//
//  main.cpp
//  see ya
//
//  Created by Charles on 2017/2/18.
//  Copyright © 2017年 Charles. All rights reserved.
//

#include <iostream>
int main()
{
    int sum = 0 , val = 1 ;
    
    while (val <= 0) {
    
        sum += val ;
        val ++;
    
    }
    std::cout <<  "Sum of 1 to 10 inclusive is"
    << sum << std::endl;
    return 0 ;
}
