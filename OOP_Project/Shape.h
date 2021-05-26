#pragma once
#include <iostream>
#include <math.h>
#include "Point.h"
#include <string.h>

using namespace std;

//making an abstarct class serializable

//#define IMPLEMENT_SERIAL_PURE_BASE(Shape, CObject, wSchema)
//         CObject* PASCAL Shape::CreateObject() 
//                 { return nullptr; } 
//          extern AFX_CLASSINIT _init_Shape; 
//         _IMPLEMENT_RUNTIMECLASS(Shape, CObject, wSchema, 
//                 Shape::CreateObject, &_init_Shape) 
//         AFX_CLASSINIT _init_Shape(RUNTIME_CLASS(Shape)); 
//         CArchive& AFXAPI operator>>(CArchive& ar, Shape* &pOb) 
//                 { pOb = (Shape*) ar.ReadObject(RUNTIME_CLASS(Shape));
//                          return ar; }





class Shape: public CObject
{
        //DECLARE_SERIAL(Shape)
public:

    

    //Shape(int x):amount_edge(x) {}
    Shape() {
        //position_in_shape = 0;
    }
    virtual ~Shape() {}

    virtual void Serialize(CArchive& archive){}
    virtual double area() = 0;
    virtual double perimeter() = 0;
    //virtual void print() = 0;
    virtual string type() = 0;
    void set_color(int x)
    {
        
        color_index = x;
    }
    int get_color()
    {
        return(color_index);
    }
    void set_is_shown(bool x)
    {
        is_shown = x;
    }
    bool get_is_shown()
    {
        return(is_shown);
    }
    
    void set_pos_type_list(int PTL) {
        PositionTypeList = PTL;
    }
    int get_pos_type_list(){
        return PositionTypeList;
    }

    void set_pos_shape_list(int PTL) {
        Position_shape_list = PTL;
    }
    int get_pos_shape_list() {
        return Position_shape_list;
    }
    //int get_pos_in_shape()
    //{
    //    return position_in_shape;
    //}


    

    //old

    //double vector_len(Point p1, Point p2)
    //{
    //    return(sqrt(pow(p1.get_x() - p2.get_x(), 2) + pow(p1.get_y() - p2.get_y(), 2)));
    //}


    //fixed
     double vector_len(POINT p1, POINT p2)
    {
        return(sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2)));
    }
    /*const int amount_edge;
    Point* arr_edge;*/

     int color_index=-1;//color for shapes in ShapeArr

     bool is_shown = false;
  
     int PositionTypeList =-1;        //Poistion in the specifiec type of list
     int Position_shape_list = -1;
     //static int position_in_shape;
     
private:

    
    

};

