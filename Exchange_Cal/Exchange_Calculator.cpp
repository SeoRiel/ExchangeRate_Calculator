#include <iostream>
#include <string>

int main()
{
	float inputWon;								// 입력 받을 한화
	const float EXCHANGE_USD = 1147.41f;		// 달러 환율
	const float EXCHANGE_JYP = 1041.24f;		// 엔화 환율
	const float EXCHANGE_EUR = 1357.84f;		// 유로 환율
	const float EXCHANGE_GBP = 1590.1f;			// 파운드 환율
	char kind;									// 달러, 엔화, 유로, 파운드 선택
	float exchange;								// 환전된 값

	std::cout << "(달러 : S / 엔화 : Y / 유로 : E / 파운드 : P)" << std::endl;
	std::cout << "변환할 한화를 입력하세요. : ";
	std::cin >> inputWon >> kind;

	switch (kind)
	{
	case 's':
	case 'S':
		exchange = EXCHANGE_USD * (inputWon * 0.001);
		std::cout << inputWon << "WON" << "에서" << exchange << "USD" << "로 환전되었습니다." << std::endl;
		break;

	case 'y':
	case 'Y':
		exchange = EXCHANGE_JYP * (inputWon * 0.01);
		std::cout << inputWon << "WON" << "에서" << exchange << "JYP" << "로 환전되었습니다." << std::endl;
		break;

	case 'e':
	case 'E':
		exchange = EXCHANGE_EUR * (inputWon * 0.001);
		std::cout << inputWon << "WON" << "에서" << exchange << "EUR" << "로 환전되었습니다." << std::endl;
		break;

	case 'p':
	case 'P':
		exchange = EXCHANGE_GBP * (inputWon * 0.001);
		std::cout << inputWon << "WON" << "에서" << exchange << "GBP" << "로 환전되었습니다." << std::endl;
		break;

	default:
		std::cout << "환전할 금액이 바르게 입력되지 않았습니다. 다시 실행해주세요." << std::endl;
		break;
	}

	return 0;
}