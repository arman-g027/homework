const ById = (id, value) => {
    document.getElementById(id).innerHTML = value;
};

const enter = (event) => {
    if (event.key === 'Enter') {
        get_weather();
    }
};

const get_weather = () => {
    const input_value = document.getElementById('input').value;
    const flags = document.getElementById('country-flag');
    const icon = document.getElementById('temp_icon');

    const API_URL = "https://api.openweathermap.org/data/2.5/weather?q=";
    const API_KEY = "fd48bdf8a8b87b3c140f17625f4e2d57";

    const state = {
        temperature: null,
        city: null,
        country: null,
        icon: null
    };

    if (input_value) {
        fetch(`${API_URL}${input_value}&appid=${API_KEY}&units=metric`)
            .then((response) => {
                if (!response.ok) {
                    throw new Error('City not found');
                }
                return response.json();
            })
            .then((data) => {
                console.log(data.weather[0].icon);
                state.temperature = data.main.temp;
                state.city = data.name;
                state.country = data.sys.country;

                ById('temp', `${state.temperature} °C`);
                ById('city', state.city);
                ById('country', state.country);

                flags.src = `https://flagpedia.net/data/flags/h80/${state.country.toLowerCase()}.png`;
                icon.src = `https://openweathermap.org/img/w/${data.weather[0].icon}.png`;

                ById('errorMessage', '');
            })
            .catch((err) => {
                ById('errorMessage', 'Error: ' + err.message);
            });
    } else {
        ById('errorMessage', 'Please enter a city name.');
    }
};