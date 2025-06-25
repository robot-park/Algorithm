#include <iostream>

using namespace std;

int N; // N은 main에서 입력받음
int grid[20][20]; // 최대 20x20까지 커버

// 전역 변수 max를 사용하거나, 함수에서 max를 반환하도록 변경
int max_val = 0; // max는 예약어일 수 있으므로 max_val로 변경

void answer(int input[][20], int N_val, int check) { // N_val을 매개변수로 추가하고, 2차원 배열 크기 명시
    int current_max_sum = 0; // 이 함수 내에서 찾은 최대 합을 저장

        for (int i = 0; i <= N_val - check; i++) { // N_val 사용
                for (int j = 0; j <= N_val - check; j++) { // N_val 사용
                            int sum = 0;
                                        for (int u = i; u < i + check; u++) { // check 변수 사용
                                                        for (int v = j; v < j + check; v++) { // check 변수 사용
                                                                            if (input[u][v] == 1) { // input 배열 사용
                                                                                                    sum++;
                                                                                                                        }
                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                                if (sum > current_max_sum) { // 이 함수 내에서만 쓰는 max_sum과 비교
                                                                                                                                                                                current_max_sum = sum;
                                                                                                                                                                                            }
                                                                                                                                                                                                    }
                                                                                                                                                                                                        }
                                                                                                                                                                                                            // 전역 max_val 업데이트 (만약 함수에서 반환하지 않는다면)
                                                                                                                                                                                                                if (current_max_sum > max_val) {
                                                                                                                                                                                                                        max_val = current_max_sum;
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                            }

                                                                                                                                                                                                                            int main() {
                                                                                                                                                                                                                                cin >> N;

                                                                                                                                                                                                                                    for (int i = 0; i < N; i++) {
                                                                                                                                                                                                                                            for (int j = 0; j < N; j++) {
                                                                                                                                                                                                                                                        cin >> grid[i][j];
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                        answer(grid, N, 3); // N을 answer 함수로 전달

                                                                                                                                                                                                                                                                            cout << max_val << endl; // 전역 max_val 출력

                                                                                                                                                                                                                                                                                return 0;
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                