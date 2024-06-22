package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	arr := []int{
		1, 5, 6, 7, 9, 10, 11, 12, 16, 21, 23, 24, 26, 27, 28, 29, 30, 32, 34, 35, 36, 37, 38, 40,
		41, 43, 44, 45, 47, 49, 50, 54, 55, 56, 57, 61, 62, 65, 66, 67, 68, 69, 71, 72, 74, 77, 78,
		79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100,
	}

	fmt.Print("Enter your guess: ")
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()

	user_input := scanner.Text()

	search_element, err := strconv.Atoi(user_input)
	if err != nil {
		fmt.Print("Unable to parse element")
		return
	}

	res := binarySearch(arr, 0, len(arr)-1, search_element)
	if res == -1 {
		fmt.Println("Element not found")
	} else {
		fmt.Printf("Element found at position %v\n", res)
	}
}

func binarySearch(arr []int, low int, high int, search_element int) int {
	if high >= low {
		mid := low + (high-low)/2

		if search_element == arr[mid] {
			return mid
		}

		if search_element < arr[mid] {
			return binarySearch(arr, low, mid-1, search_element)
		}

		return binarySearch(arr, mid+1, high, search_element)
	}

	return -1
}
