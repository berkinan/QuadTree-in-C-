#ifndef QUADTREE_H
#define QUADTREE_H

#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
    Point(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
    Point()
    {
        x = 0;
        y = 0;
    }
};

struct Node {
    Point pos;
    string data;
    Node(Point _pos, string _data)
    {
        pos = _pos;
        data = _data;
    }
    Node() { data = ""; }
};

class Quad {
    private:
    
    Point topLeft;
    Point botRight;

    Node* n;

    Quad* topLeftTree;
    Quad* topRightTree;
    Quad* botLeftTree;
    Quad* botRightTree;

    public:
    Quad()
    {
        topLeft = Point(0, 0);
        botRight = Point(0, 0);
        n = NULL;
        topLeftTree = NULL;
        topRightTree = NULL;
        botLeftTree = NULL;
        botRightTree = NULL;
    }
    Quad(Point topL, Point botR)
    {
        n = NULL;
        topLeftTree = NULL;
        topRightTree = NULL;
        botLeftTree = NULL;
        botRightTree = NULL;
        topLeft = topL;
        botRight = botR;
    }

    void insert(Node*);

    Node* search(Point);

    bool inBoundary(Point);

};



































#endif