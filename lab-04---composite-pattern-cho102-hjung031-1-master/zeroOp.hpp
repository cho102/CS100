#ifndef __ZEROOP_HPP__
#define __ZEROOP_HPP__

class ZeroOpMock: public Base {
    public:
        ZeroOpMock() { };

        virtual double evaluate() { return 0.0; }
        virtual string stringify() { return "0.0"; }

#endif
}
