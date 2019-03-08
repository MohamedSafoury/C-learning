/*
    input  : five years of monthly rainfall data
    output : total rainfall of each year , average yearly rainfall , average rainfall of each month
*/

#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12           // number of months in the year
#define YEARS   5           // number of years in the data


int main()
{
    // initializing rainfall data for 2010-2014

    const float rain[5][12] = // array of 5 element array of  12-float elements arrays
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6}// 1st  element array of 12-float elements array
      , {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3}// 2and element array of 12-float elements array
      , {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4}// 3rd  element array of 12-float elements array
      , {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2}// 4th  element array of 12-float elements array
      , {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}// 5th  element array of 12-float elements array
    } ;

    int year , month ;  // declare  index variables
    float subtotal , total ;  // declare total

    // printing table header
    printf("year    rainfall(inches)\n");

    // looping to find sum of rain each year and average of yearly rainfall
    for ( year = 0 , total = 0 ; year < YEARS ; year++)
    {
        for (month = 0 , subtotal = 0 ; month < MONTHS ; month++)
        {
            subtotal = subtotal + rain[year][month] ;
        }

        printf("%5d %15.1f\n",2010+year,subtotal);

        total = total + subtotal ; // summation  of rainfall for 5 years


    }

    //output the yearly average of rainfall through five years from 2010 to 2014

    printf("\nThe yearly average of rainfall is %.1f inches.\n\n",
                    total/YEARS);


    //monthly average of rain fall calculation

    //print table header
    printf("\n\nThe Monthly Average :\n\n") ;
    printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct ");
    printf(" Nov Dec\n");

    for ( month = 0 ; month < MONTHS ; month++)
    {
        for (year = 0 , subtotal = 0  ; year < YEARS ; year++)
        {
            subtotal = subtotal+ rain[year][month];

        }

        //output the
        printf("%4.1f",subtotal/YEARS);

    }

    return 0;
}
