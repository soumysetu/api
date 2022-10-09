package main

import (
	"encoding/json"
	"fmt"
	"net/http"
)

//goijutdfgoi

type customer struct {
	Name string `json: "namess"`
	City string `json: "city name"`
	Zip  string `json: "zipcode"`
}

func greet(w http.ResponseWriter, r *http.Request) {
	fmt.Fprint(w, "hello world")
}

func greetall(w http.ResponseWriter, r *http.Request) {
	customers := []customer{
		{Name: "setu", City: "agra", Zip: "465644"},
		{Name: "ruchika", City: "krisnagiri", Zip: "875644"},
	}
	w.Header().Add("Content-Type", "application/json")
	json.NewEncoder(w).Encode(customers)
}

func main() {
	http.HandleFunc("/greet", greet)
	http.HandleFunc("/customers", greetall)
	http.ListenAndServe("localhost:8080", nil)
}
