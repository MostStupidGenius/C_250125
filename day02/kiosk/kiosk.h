// kiosk.h
#include <string>
#ifndef KIOSK_H
#define KIOSK_H

class Menu { // �޴� ��ü�� �����ϱ� ���� Ŭ���� ���� ����
private:
	char* name;
	int price;
	int amount;
public:
	// �޴��� ����� ������
	Menu(char* menuName, int iPrice) : 
		name(menuName), price(iPrice), amount(0)
		{};
	friend class Kiosk; // Kiosk Ŭ����������
	// �޴��� �׸� ���Ѿ��� ������ �� �ֵ��� friend�� ����
};

class Kiosk {
private:
	// �޴����� ���� �迭 ����
	Menu menus[];
public:
	// ������
	Kiosk() {
		// �⺻ �޴��� �߰��� �� �ְԲ� ����
		//Menu newMenus[] = {};
	}

	// ����� ���� �����ڷ�
	// �޴� �迭�� ���޹޾� menus�� ������ �� �ְԲ� ����
	

	void run() {
			// �޴��� ����
			// �޴� ��ȣ �Է¹ޱ�

			// �Է¹��� �޴� ��ȣ�� ��ȿ�ϴٸ�
			// ������ �Է¹ޱ�

			// ��ȿ�� ������� ������ �޴� ������ ����
			// �����ݾ� ���� �� ����ؼ� �ȳ�

			// ������ �ݾ��� �Է¹ް�
			// ������ �ݾ׺��� ũ�ų� ���ٸ� �ܵ��� ����Ͽ� ���
			// or ������ �����ϴٸ� "�ݾ��� �����մϴ�" ���

	}




};



#endif // !KIOSK_H
