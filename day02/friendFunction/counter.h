// counter.h
#ifndef COUNTER_H // ��� ���� ����
#define COUNTER_H // COUNTER_H ��ũ�� ����
#include "stdio.h"

class Display; // ���� ����

class Counter {
private:
	int count; // ī������ ���� ���� �����ϴ� ��� ����
public:
	// count�� 0���� �ʱ�ȭ
	// �ʱ�ȭ ����Ʈ ����� ����� �⺻ ������
	Counter() : count(0) {}

	// Display Ŭ������ ģ���� ����
	friend class Display;

	// increment �Լ��� ģ�� �Լ��� ����
	// �� �Լ��� Counter�� private ����� ���� ����
	friend void increment(Counter& c);
};

// Ŭ���� Display ����
class Display {
public:
	// Counter ��ü�� ���� ī��Ʈ ���� ����ϴ� ��� �Լ�
	// friend class ���� ���п� private ����� count�� ���� ������ �����ϴ�.
	void showCount(Counter& c) {
		printf("���� ī��Ʈ: %d\n", c.count);
	}
};

// Counter Ŭ������ ģ�� �Լ��� ����� ���� �Լ�
// Counter ��ü�� count���� 1 ���� ��Ų��.
void increment(Counter& c) {
	// friend ���� ���п� private ��� count�� ���� ������ �����ϴ�.
	c.count++; // ���������ڷ� 1 ���� ��Ų��.
}

#endif // !COUNTER_H // ��� ���� ��
