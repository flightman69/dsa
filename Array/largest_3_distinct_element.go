package main

import (
	"fmt"
)

func print3Largest(arr []int) {
	size := len(arr)
	if size < 3 {
		fmt.Println("Invalid Array")
	}

	first := arr[0]
	second := arr[0]
	third := arr[0]
	for _, val := range arr {
		if first < val {
			third = second
			second = first
			first = val
		} else if second < val {
			third = second
			second = third
		} else if third < val {
			third = val
		}
	}

	fmt.Printf("%v %v %v\n", first, second, third)
}

func main() {
	arr := []int{12, 13, 1, 10, 34, 1}
	print3Largest(arr)
}
