#include<iostream>
using namespace std;
class student {
private:
	int no;
	int score;
public:
	student(int n,int s) {
		this->no = n;
		this->score = s;
	}
	int get_s(){
		return score;
	}
		int get_n(){
			return no;
	}
};
void max(student* p,int n) {
	int index = 0;
	int max_s = p[0].get_s();
	for (int i = 1; i < 5; i++) {
		if (max_s < p[i].get_s()) {
			max_s = p[i].get_s();
			index = i;
		}
	}
	cout << "成绩最高者为：" << p[index].get_n() << "成绩为：" << p[index].get_s();
}
int main() {
	student s[5]{
		student(1,88),student(2,76),student(3,86),student(4,99),student(5,95)
	};
	max(s, 5);
}