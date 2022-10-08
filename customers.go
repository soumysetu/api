package domain

type customer struct {
	id      string
	name    string
	city    string
	zipcode string
	status  string
}

type CustomerRepository interface {
	findall() ([]customer, error)
}
