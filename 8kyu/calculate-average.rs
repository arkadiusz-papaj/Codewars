fn find_average(slice: &[f64]) -> f64 {
    match slice.len() {
        0 => return 0 as f64,
        size => return slice.iter().sum::<f64>() / (size as f64),
    }
}