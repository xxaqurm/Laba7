#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

// Рекурсивная функция
vector<int> getKthPermutation(vector<int>& nums, int k) {
    if (nums.empty()) return {};

    int n = nums.size();
    int fact = tgamma(n - 1); // сколько перестановок на одно число впереди

    int index = (k - 1) / fact; // определяем индекс текущей цифры
    int newK = (k - 1) % fact + 1; // новый k для оставшихся цифр

    // выбираем элемент и удаляем его из nums
    int chosen = nums[index];
    nums.erase(nums.begin() + index);

    vector<int> result = {chosen};
    vector<int> rest = getKthPermutation(nums, newK);
    result.insert(result.end(), rest.begin(), rest.end());
    return result;
}

int main() {
    int n, k;
    cout << "Введите n и k: ";
    cin >> n >> k;

    vector<int> nums;
    for (int i = 1; i <= n; ++i)
        nums.push_back(i);

    vector<int> result;
    result = getKthPermutation(nums, k);

    cout << "Результат: " << endl;
    for (auto& elm : result) {
        cout << elm << " ";
    }
    cout << endl;

    return 0;
}
