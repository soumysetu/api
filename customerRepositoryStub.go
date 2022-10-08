package domain

type CustomerRepositoryStub struct {
	customers []customer
}

func (s CustomerRepositoryStub) findall() ([]customer, error) {
	return s.customers, nil
}

func NewCustomerRepositorystub() CustomerRepositoryStub {
	customers := []customer{
		{id: "565", name: "fsgsfde", city: "bjbjh", zipcode: "54656", status: "65465jhcf"},
		{id: "987", name: "654gefe", city: "knjkj", zipcode: "748798", status: ".ljhgbju"},
	}
	return CustomerRepositoryStub{customers}
}
