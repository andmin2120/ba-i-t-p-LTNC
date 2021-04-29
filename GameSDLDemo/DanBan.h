#pragma once

#ifndef DanBan_H_
#define DanBan_H_
#include "HienThi.h"

#define WIDTH_FIRE 30 // cac kich thuoc dan 
#define HEIGHT_FIRE 28

#define WIDTH_LASER 29
#define HEIGHT_LASER 16

class DanBan : public HienThi // 1 lop dan ban
{
public:
    enum AmoType
    {
        NONE = 0,
        FIRE = 1,
        LASER = 2
    };

    DanBan();
    ~DanBan();
    void HandleInputAction(SDL_Event events); // ham xu ly cac xu kien khi nhan phim va chuot
    void HandleMove(const int& x_border, const int& y_border); // ham thay doi vi tri cua nhan vat khi di chuyen
    void HandleMoveRightToLeft();

    int get_type() const { return amo_type_; }
    void set_type(const int& type) { amo_type_ = type; }

    bool get_is_move() const { return is_move_; } 
    void set_is_move(bool is_move) { is_move_ = is_move; }
    void SetWidthHeight(const int& widht, const int& height) { rect_.w = widht; rect_.h = height; }; //

    void set_x_val_(const int& val) { x_val_ = val; }
    void set_y_val_(const int& val) { y_val_ = val; }

    int get_x_val() const {
        return x_val_;
    }
    int get_y_val_() const {
        return y_val_;
    }

private:
    int x_val_;
    int y_val_;
    bool is_move_;
    int amo_type_;
};


#endif
