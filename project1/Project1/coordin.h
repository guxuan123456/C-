#pragma once 
// ͷ�ļ���coordin.h -- structure templates and function prototypes
//structure templates
//�൱�ڰ�ԭ��Դ�ļ��ϵ���Щ����ṹ�Ķ���ʲô�Ķ��ᵽͷ�ļ��У�ֻ���岢��д����ʵ�ַ�ʽ

#ifndef COORDIN_H_
#define COORDIN_H_

struct polar
{
	double distance;		//����
	double angle;		//�Ƕ�
};

struct rect
{
	double x;
	double y;
};

//���庯��

polar rect_to_polar(rect xypos);
void show_polar(polar dpos);


#endif // !COORDIN_H_

