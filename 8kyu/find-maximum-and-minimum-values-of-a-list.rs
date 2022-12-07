fn minimum(arr: &[i32]) -> i32 {
    let mut min: i32 = i32::MAX;
    
    for value in arr.iter() {
        if *value < min {
            min = *value;
        }
    }
    
    return min;
}

fn maximum(arr: &[i32]) -> i32 {
    return *(arr.iter().max().unwrap());
}