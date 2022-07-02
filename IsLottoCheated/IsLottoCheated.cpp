#include<iostream>
#include<cstdlib>
#include<ctime>

#define PURCHASER 100000000
#define SIMULATION_CNT 100
#define ROUND_CNT 1019
#define HIGHTEST_WINNET_CNT 50

using namespace std;

int purchaser_lot_arr[6] = { 0, };
int game_lot_arr[6] = { 0, };

int sim_purchaser_lot_arr[3] = { 0, };
int sim_game_lot_arr[3] = { 0, };

void set_lot_arr(int* target_lot) {
	int* ptr = target_lot;
	for (int i = 0; i < 6; i++) {
		target_lot[i] = (rand() % 45) + 1;
		for (int j = 0; j < i; j++) {
			if (target_lot[j] == target_lot[i]) {
				i--;
				break;
			}
		}
	}
}

void set_sim_lot_arr(int* target_lot) {
	int* ptr = target_lot;
	for (int i = 0; i < 3; i++) {
		target_lot[i] = (rand() % 79) + 1;
		for (int j = 0; j < i; j++) {
			if (target_lot[j] == target_lot[i]) {
				i--;
				break;
			}
		}
	}
}

bool checkEqualArray(int arr1[], int arr2[], int arr_length) {
	for (int i = 0; i < arr_length; i++) {
		for (int j = 0; j < arr_length; j++) {
			if (arr1[i] == arr2[j]) { break; }
			if (j == arr_length - 1) { return false; }
		}
	}
	return true;
}

int main() {
	int t1 = time(NULL);
	srand((unsigned int)time(NULL) * 45);
	unsigned short simulation_cnt = 0;
	int incident_cnt = 0;

	while (simulation_cnt < SIMULATION_CNT) {
		unsigned short round_cnt = 0;
		cout << "Simulation Count #" << simulation_cnt + 1 << endl;
		while (round_cnt < ROUND_CNT) {
			cout << simulation_cnt+1 << " - " << round_cnt + 1 << endl;
			int p = 0;
			unsigned short now_winner = 0;
			set_lot_arr(game_lot_arr);
			while (p < PURCHASER) {
				set_lot_arr(purchaser_lot_arr);
				if (checkEqualArray(purchaser_lot_arr, game_lot_arr, 6)) { now_winner++; }
				p++;
			}
			round_cnt++;

			cout << "Now Winner : " << now_winner << endl;
			
			if (now_winner > HIGHTEST_WINNET_CNT) {
				incident_cnt++;
				break;
			}
		}
		simulation_cnt++;
	}
	float prob = incident_cnt / SIMULATION_CNT;
	cout << "Simulation count : " << SIMULATION_CNT << endl;
	cout << "Incident count : " << incident_cnt << endl;
	cout << "Prob : " << prob << endl;
	int t2 = time(NULL);
	cout << "Time : " << t2 - t1 << endl;
	return 0;

};
