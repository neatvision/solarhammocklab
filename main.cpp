#include <string>
#include <vector>

void collect_triples() {
    std::vector<int> values;
    for (int i = 1; i <= 5; ++i) values.push_back(i * 3);
    int total = 0;
    for (std::size_t i = 0; i < values.size(); ++i) total += values[i];
    (void)total;
}

void is_prime() {
    int n = 97;
    bool prime = (n > 1);
    for (int d = 2; d * d <= n; ++d) {
        if (n % d == 0) { prime = false; break; }
    }
    (void)prime;
}

void geometric_sum() {
    int acc = 0;
    int term = 1;
    for (int i = 0; i < 8; ++i) { acc += term; term *= 2; }
    (void)acc;
}

void digit_product() {
    int n = 2345;
    int product = 1;
    while (n > 0) {
        product *= (n % 10);
        n /= 10;
    }
    (void)product;
}

extern "C" int subtle_hollow();
extern void frost_kite();
extern void serene_lantern();
extern void ivory_prism();

int main() {
    collect_triples();
    is_prime();
    geometric_sum();
    digit_product();
    frost_kite();
    serene_lantern();
    ivory_prism();
    return subtle_hollow();
}
