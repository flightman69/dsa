package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func linearSearch(arr []int, searchElement int) int {
	for index, element := range arr {
		if searchElement == element {
			return index
		}
	}

	return -1
}

func main() {
	arr := []int{
		3, 4, 6, 7, 8, 9, 10, 14, 15, 17, 20, 23, 24, 25, 26, 27, 28, 30, 31, 32, 33, 34, 38, 39,
		40, 41, 42, 43, 46, 47, 48, 49, 51, 54, 55, 56, 57, 59, 61, 63, 64, 65, 66, 68, 69, 70, 75,
		76, 78, 80, 81, 83, 84, 85, 86, 89, 90, 91, 93, 94, 95, 96, 98, 99,
	}

	fmt.Print("[Linear Search Algorithm in Go]\nWorse Case O(N)\nAverage Case O(N)\nBest Case O(1)\n")
	fmt.Print("Enter the number: ")
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	userInput := scanner.Text()

	searchElement, err := strconv.Atoi(userInput)
	if err != nil {
		fmt.Println("Failed to read input")
		return
	}

	res := linearSearch(arr, searchElement)
	if res == -1 {
		fmt.Println("Element not found in the array")
	} else {
		fmt.Printf("Element found at the position %v\n", res)
	}
}
