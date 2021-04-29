
#include "DanBan.h"

DanBan::DanBan()
{
    rect_.x = 0;
    rect_.y = 0;
    x_val_ = 0;
    y_val_ = 0;
    is_move_ = false;
    amo_type_ = NONE;
}

DanBan::~DanBan()
{

}

void DanBan::HandleMove(const int& x_border, const int& y_border) // ham thay doi vi tri cua dan
{
    if (is_move_ == true)
    {
        rect_.x += x_val_;
        if (rect_.x > x_border)
        {
            is_move_ = false;
        }
    }
}

void DanBan::HandleMoveRightToLeft() { // ham thay doi vi tri cua dan tu trai qua phai
    rect_.x -= x_val_;
    if (rect_.x < 0) {
        is_move_ = false;
    }
}

void DanBan::HandleInputAction(SDL_Event events) 
{
    ;//Todo
}
