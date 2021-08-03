#include <iostream>
#include <string>

int main()
{
	float inputWon;								// �Է� ���� ��ȭ
	const float EXCHANGE_USD = 1147.41f;		// �޷� ȯ��
	const float EXCHANGE_JYP = 1041.24f;		// ��ȭ ȯ��
	const float EXCHANGE_EUR = 1357.84f;		// ���� ȯ��
	const float EXCHANGE_GBP = 1590.1f;			// �Ŀ�� ȯ��
	char kind;									// �޷�, ��ȭ, ����, �Ŀ�� ����
	float exchange;								// ȯ���� ��

	std::cout << "(�޷� : S / ��ȭ : Y / ���� : E / �Ŀ�� : P)" << std::endl;
	std::cout << "��ȯ�� ��ȭ�� �Է��ϼ���. : ";
	std::cin >> inputWon >> kind;

	switch (kind)
	{
	case 's':
	case 'S':
		exchange = EXCHANGE_USD * (inputWon * 0.001);
		std::cout << inputWon << "WON" << "����" << exchange << "USD" << "�� ȯ���Ǿ����ϴ�." << std::endl;
		break;

	case 'y':
	case 'Y':
		exchange = EXCHANGE_JYP * (inputWon * 0.01);
		std::cout << inputWon << "WON" << "����" << exchange << "JYP" << "�� ȯ���Ǿ����ϴ�." << std::endl;
		break;

	case 'e':
	case 'E':
		exchange = EXCHANGE_EUR * (inputWon * 0.001);
		std::cout << inputWon << "WON" << "����" << exchange << "EUR" << "�� ȯ���Ǿ����ϴ�." << std::endl;
		break;

	case 'p':
	case 'P':
		exchange = EXCHANGE_GBP * (inputWon * 0.001);
		std::cout << inputWon << "WON" << "����" << exchange << "GBP" << "�� ȯ���Ǿ����ϴ�." << std::endl;
		break;

	default:
		std::cout << "ȯ���� �ݾ��� �ٸ��� �Էµ��� �ʾҽ��ϴ�. �ٽ� �������ּ���." << std::endl;
		break;
	}

	return 0;
}