fn is_square(n: i64) -> bool {
    if n < 0 {
        return false;
    }
    else {
        return ((n as f64).sqrt() as i64).pow(2) == n;
    }
}