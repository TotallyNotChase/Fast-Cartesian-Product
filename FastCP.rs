fn get_tuple_at(mut index: usize, sets: &[Vec<i32>]) -> Vec<i32> {
    let mut tuple = vec!(0; sets.len());
    for i in (0..sets.len()).rev() {
        tuple[i] = sets[i][index % sets[i].len()];
        index /= sets[i].len();
    }
    tuple
}

fn main() {
    let mut sets_vec = vec![vec![0i32; 5]; 3];
    let mut sets_arr = [[0i32; 5]; 3];
    for i in 0..5 {
        for j in 0..3 {
            sets_vec[j][i] = i as i32 + 1;
            sets_arr[j][i] = i as i32 + 1;
        }
    }
    println!("{:?}", get_tuple_at(2usize, &sets_vec));
}
