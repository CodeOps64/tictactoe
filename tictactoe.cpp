#include <iostream>

int main() {

	int count = 0, iter, player=1;
	char arr[9] = { '1','2','3' ,'4' ,'5' ,'6' ,'7' ,'8' ,'9' };
point_begin:
	std::cout << std::endl;
	for (int i = 0; i < 9; i++) {
		std::cout << "    " << arr[i] << "    ";
		if (count == 2) {
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			count = 0;
			continue;
		}
		count++;
	}
	if (arr[0] == arr[1] && arr[0] == arr[2]) {
		goto complete;
	}
	else if (arr[3] == arr[4] && arr[3] == arr[5]) {
		goto complete;
	}
	else if (arr[6] == arr[7] && arr[6] == arr[8]) {
		goto complete;
	}
	else if (arr[0] == arr[3] && arr[0] == arr[6]) {
		goto complete;
	}
	else if (arr[1] == arr[4] && arr[1] == arr[7]) {
		goto complete;
	}
	else if (arr[2] == arr[5] && arr[2] == arr[8]) {
		goto complete;
	}
	else if (arr[0] == arr[4] && arr[0] == arr[8]) {
		goto complete;
	}
	else if (arr[2] == arr[4] && arr[2] == arr[6]) {
		goto complete;
	}
	std::cout << std::endl;
	if (player > 2) {
		player = 1;
	}
	std::cout << "Player : "<< player << std::endl;
	if (player == 1) {
		std::cout << "Enter position, 'x' ?" << std::endl;
		std::cout << std::endl;
		std::cin >> iter;
		arr[iter - 1] = 'x';
	}
	else {
		std::cout << "Enter position, 'o' ?" << std::endl;
		std::cout << std::endl;
		std::cin >> iter;
		arr[iter - 1] = 'o';
	}
	player++;
	system("cls");
	goto point_begin;

complete:
	std::cout << "TIC TAC TOE" << std::endl;
	std::cout << "Player " << player-1 << " wins!!!";
	std::cout << std::endl;
	return 0;
}
