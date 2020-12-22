#ifndef __NEGSEVENOP_HPP__
#define __NEGSEVENOP_HPP__

class negSevenOpMock: public Base {
    public:
        negSevenOpMock() { };

        virtual double evaluate() { return -7.0; }
        virtual string stringify() { return "-7.0"; }
}

#endif
