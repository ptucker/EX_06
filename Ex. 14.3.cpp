//
//  Ex. 14.3.cpp
//  EX06_04
//
//  Created by Grant Bingham on 6/20/16.
//  Copyright (c) 2016 gbingham18. All rights reserved.
//
#include <iostream>
using namespace std;

class Circle
{
public:
    Circle()
    {
        radius = 1;
        numberOfObjects++;
    }
    
    Circle(double newRadius)
    {
        radius = newRadius;
        numberOfObjects++;
    }
    
    double getArea() const
    {
        double area = (radius * radius * 3.14);
        return area;
    }
    
    double getRadius() const
    {
        return radius;
    }
    
    void setRadius(double setRadius) const
    {
        radius = setRadius;
    }
    
    static int getNumberOfObjects()
    {
        return numberOfObjects;
    }
    
    bool operator<(Circle c[], int size)
    {
        bool sort = false;
        do
        {
            for(int i = 0; i < size; i++)
            {
                if(c[i].getRadius() > c[i+1].getRadius())
                {
                    int temp = c[i].getRadius();
                    c[i].getRadius() = c[i+1].getRadius();
                    c[i+1].getRadius() = temp;
                    sort = true;
                }
            }
        }while(sort == true);
        
        return Circle c[];
    }
    
private:
    double radius;
    static int numberOfObjects;
};

int main()
{
    Circle array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    operator<(array[10], 10);
}
