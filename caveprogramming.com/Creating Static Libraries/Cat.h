#ifndef CAT_H_
#define CAT_H_

namespace apple {

void saySomething();

class Cat {
public:
    Cat();
    void speak();
    virtual ~Cat();
};

}
#endif // CAT_H_
