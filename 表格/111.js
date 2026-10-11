// 23530127.js
function changePassword() {
alert('修改密码');
}

document.getElementById('basic-info-form').addEventListener('submit', function(event) {
event.preventDefault();
console.log('Form submitted:', new FormData(this));
});
// 假设这是从后端获取的省份和城市数据
const provinces = [
  { id: '1', name: '江苏省', cities: ['常州市', '苏州市', '无锡市'] },
  { id: '2', name: '浙江省', cities: ['杭州市', '宁波市', '台州市'] },
  { id :"3",name:'广东省',cities: ['广州','云浮市','清远市'],}
  // 更多省份...
];

function loadProvinces() {
  const provinceSelect = document.getElementById('province');
  provinces.forEach(province => {
    const option = document.createElement('option');
    option.value = province.id;
    option.text = province.name;
    provinceSelect.appendChild(option);
  });
}

function loadCities(provinceId) {
  const citySelect = document.getElementById('city');
  citySelect.disabled = false;
  citySelect.innerHTML = '<option value="">请选择您所在的城市</option>';

  const selectedProvince = provinces.find(province => province.id === provinceId);
  if (selectedProvince) {
    selectedProvince.cities.forEach(city => {
      const option = document.createElement('option');
      option.value = city;
      option.text = city;
      citySelect.appendChild(option);
    });
  }
}

document.addEventListener('DOMContentLoaded', loadProvinces);
