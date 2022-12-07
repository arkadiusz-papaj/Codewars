fn get_sum(a: i64, b: i64) -> i64 {
    (a.min(b)..=a.max(b)).sum()
}