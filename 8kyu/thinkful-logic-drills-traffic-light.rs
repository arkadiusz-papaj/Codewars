fn update_light(current: &str) -> String {
    // Code goes here..
    match current {
        "green" => "yellow",
        "yellow" => "red",
        "red" => "green",
        _ => panic!("Invalid light color!"),
    }.into()
}