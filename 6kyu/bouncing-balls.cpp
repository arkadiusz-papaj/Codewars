class Bouncingball
{
public:
    static auto bouncingBall(double h, double bounce, double window) -> int;
};

[[nodiscard]] auto Bouncingball::bouncingBall(double h, double bounce, double window) -> int {
    auto seen_times = int{};
    
    if (h > 0 && (bounce > 0 && bounce < 1) && window < h) {
        while (h > window) {
            seen_times += 2;
            h *= bounce;
        }
        seen_times -= 1;
    }
    else {
        seen_times = -1;
    }

    return seen_times;
};