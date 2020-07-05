window.onload = function() {

    let prefectures_p = document.getElementById('prefectures_');
    let current_date_p = document.getElementById('current_date');
    let prefectures_total_p = document.getElementById('prefectures_total');
    let total_p = document.getElementById('total');
    let death_p = document.getElementById('death');
    let error_p = document.getElementById('error');

    document.getElementById('form').onsubmit = function() {

        prefectures_p.textContent = '';
        current_date_p.textContent = '';
        prefectures_total_p.textContent = '';
        total_p.textContent = '';
        death_p.textContent = '';
        error_p.textContent = '';

        /* 都道府県を取得 */
        let prefectures = document.getElementById('prefectures').value;
        /* console.log(prefectures); */

        /* CODIV-19 Japan Web API */
        const URL = 'https://covid19-japan-web-api.now.sh/api/v1/prefectures';

        let requestOptions = {
            method: 'GET',
            mode: 'cors',
            headers: {
                'Content-Type': 'application/json; charset=utf-8'
            },
            redirect: 'follow',
          };
          
          fetch(URL, requestOptions)
            .then((response) => {
                if (response.status === 200 && response.ok) {
                    return response.json();
                } else {
                    throw new Error();
                }
            })
            .then((json) => {
                
                console.log(json);

                let total_case = 0;
                let total_death = 0;
                let current_date = '';

                for (let i = 0 ; i < Object.keys(json).length ; i++) {
                    if (json[i].name_en === prefectures) {
                        /* console.log(Object.keys(json).length); */
                        /* parameter */
                        /* prefectures_p.textContent = '都道府県：' + json[i].name_ja; */

                        current_date = json[i].last_updated.cases_date.toString();

                        /* 現在 日付 */
                        if (current_date.substr(4, 1) === '0' && current_date.substr(6, 1) === '0') {
                            current_date = (current_date.substr(0, 4) + '年' + current_date.substr(5, 1) + '年' + current_date.substr(7, 1) + '日');
                        } else if (current_date.substr(4, 1) === '0') {
                            current_date = (current_date.substr(0, 4) + '年' + current_date.substr(5, 1) + '年' + current_date.substr(6, 2) + '日');
                        } else if (current_date.substr(6, 1) === '0') {
                            current_date = (current_date.substr(0, 4) + '年' + current_date.substr(4, 2) + '年' + current_date.substr(7, 1) + '日');
                        } else {
                            current_date = (current_date.substr(0, 4) + '年' + current_date.substr(4, 2) + '年' + current_date.substr(6, 2) + '日');
                        }
                        
                        current_date_p.textContent = '※' + current_date + '  時点';
                        prefectures_total_p.textContent = json[i].name_ja + '  累計感染者数：'　+ json[i].cases.toLocaleString() + '人';
                    }
                    
                    total_case += json[i].cases;
                    total_death += json[i].deaths;
                }

                total_p.textContent = '全国の累計感染者数：' + total_case.toLocaleString() + '人';
                death_p.textContent = '全国の累計死者数：'　+ total_death.toLocaleString() + '人';
            })
            .catch(error => {
                error_p.textContent = error.message;
            });

            return false;
    }
}