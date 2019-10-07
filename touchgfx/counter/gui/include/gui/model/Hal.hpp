#ifndef BUTTON_EXAMPLE_HAL_H
#define BUTTON_EXAMPLE_HAL_H


class Hal
{
public:
    void init();
    void setLed(bool on);
    bool getButton();
};


#endif //BUTTON_EXAMPLE_HAL_H
