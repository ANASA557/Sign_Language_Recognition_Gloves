//
// Created by tise on 2026/5/28.
//

#ifndef HANDS_SEE_HANDSTRUCT_H
#define HANDS_SEE_HANDSTRUCT_H

//建议time每次+1
//手指分为五个档位
//陀螺仪最大数为5.00
//必须必须！没有数值检测。

struct HandStruct {
    int time;
    int finger1;//大拇指
    int finger2;//食指
    int finger3;//中指
    int finger4;//无名指
    int finger5;//小拇指
    //左手
    int finger6;
    int finger7;
    int finger8;
    int finger9;
    int finger10;
    //陀螺仪
    float gyro1;//右手手腕
    float gyro2;//右手小臂
    float gyro3;//左手手腕
    float gyro4;//左手小臂
}handStruct;

void InputStruct(HandStruct &handStruct,int f1,int f2,int f3,int f4,int f5,int f6,int f7,int f8,int f9,int f10,float gyro1,float gyro2,float gyro3,float gyro4) {
        handStruct.time = handStruct.time + 1;
        handStruct.finger1 = f1;
        handStruct.finger2 = f2;
        handStruct.finger3 = f3;
        handStruct.finger4 = f4;
        handStruct.finger5 = f5;
        handStruct.finger6 = f6;
        handStruct.finger7 = f7;
        handStruct.finger8 = f8;
        handStruct.finger9 = f9;
        handStruct.finger10 = f10;
        handStruct.gyro1 = gyro1;
        handStruct.gyro2 = gyro2;
        handStruct.gyro3 = gyro3;
        handStruct.gyro4 = gyro4;
}

#endif //HANDS_SEE_HANDSTRUCT_H
