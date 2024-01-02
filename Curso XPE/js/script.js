function start() {
  var buttonCalculate = document.querySelector('#button-calculate');
  buttonCalculate.addEventListener('click', handleButtonCLick);

  var inputNumberA = document.querySelector('#input-numberA');
  var inputNumberB = document.querySelector('#input-numberB');

  //inputNumberA.addEventListener('input', handleButtonCLick);
  //inputNumberB.addEventListener('input', handleButtonCLick);

  handleButtonCLick();
}

function calculateSoma(numberA, numberB) {
  return numberA + numberB;
}

function calculateSubAB(numberA, numberB) {
  return numberA - numberB;
}

function calculateSubBA(numberA, numberB) {
  return numberB - numberA;
}

function calculateMult(numberA, numberB) {
  return numberA * numberB;
}

function calculateDivAB(numberA, numberB) {
  if (numberB !== 0) {
    return numberA / numberB;
  } else {
    return 'Não existe';
  }
}

function calculateDivBA(numberA, numberB) {
  if (numberA !== 0) {
    return numberB / numberA;
  } else {
    return 'Não existe';
  }
}

function calculatePotAB(numberA, numberB) {
  if (numberA === 0 && numberB < 0) {
    return 'Não existe';
  } else {
    return numberA ** numberB;
  }
}

function calculatePotBA(numberA, numberB) {
  if (numberB === 0 && numberA < 0) {
    return 'Não existe';
  } else {
    return numberB ** numberA;
  }
}

function calculateRaizA(numberA) {
  if (numberA >= 0) {
    return Math.sqrt(numberA);
  } else {
    return 'Não existe em R';
  }
}

function calculateRaizB(numberB) {
  if (numberB >= 0) {
    return Math.sqrt(numberB);
  } else {
    return 'Não existe em R';
  }
}

function calculateFatA(numberA) {
  if (numberA < 0) {
    return 'Não existe';
  }
  if (numberA === 0 || numberA === 1) {
    return 1;
  } else {
    for (i = numberA - 1; i >= 1; i--) {
      numberA = numberA * i;
    }
    return numberA;
  }
}

function calculateFatB(numberB) {
  if (numberB < 0) {
    return 'Não existe';
  }
  if (numberB === 0 || numberB === 1) {
    return 1;
  } else {
    for (i = numberB - 1; i >= 1; i--) {
      numberB = numberB * i;
    }
    return numberB;
  }
}

function calculatePorcAB(numberA, numberB) {
  if (numberA === 0) {
    return 'Não existe';
  } else {
    var numeradorAB = numberB / numberA;
    var formattedNumeradorAB = numeradorAB.toFixed(2);

    return formattedNumeradorAB * 100;
  }
}

function calculatePorcBA(numberA, numberB) {
  if (numberB === 0) {
    return 'Não existe';
  } else {
    var numeradorBA = numberA / numberB;
    var formattedNumeradorBA = numeradorBA.toFixed(2);

    return formattedNumeradorBA * 100;
  }
}

function calculateMedia(numberA, numberB) {
  return (numberA + numberB) / 2;
}

function handleButtonCLick() {
  var inputNumberA = document.querySelector('#input-numberA');
  var inputNumberB = document.querySelector('#input-numberB');
  var resultSoma = document.querySelector('#result-soma');
  var resultSubAB = document.querySelector('#result-subAB');
  var resultSubBA = document.querySelector('#result-subBA');
  var resultMult = document.querySelector('#result-mult');
  var resultDivAB = document.querySelector('#result-divAB');
  var resultDivBA = document.querySelector('#result-divBA');
  var resultPotAB = document.querySelector('#result-potAB');
  var resultPotBA = document.querySelector('#result-potBA');
  var resultRaizA = document.querySelector('#result-raizA');
  var resultRaizB = document.querySelector('#result-raizB');
  var resultFatA = document.querySelector('#result-fatA');
  var resultFatB = document.querySelector('#result-fatB');
  var resultPorcAB = document.querySelector('#result-porcAB');
  var resultPorcBA = document.querySelector('#result-porcBA');
  var resultMedia = document.querySelector('#result-media');

  var numberA = Number(inputNumberA.value);
  var numberB = Number(inputNumberB.value);

  var soma = calculateSoma(numberA, numberB);
  resultSoma.textContent = soma;

  var subAB = calculateSubAB(numberA, numberB);
  resultSubAB.textContent = subAB;

  var subBA = calculateSubBA(numberA, numberB);
  resultSubBA.textContent = subBA;

  var mult = calculateMult(numberA, numberB);
  resultMult.textContent = mult;

  var divAB = calculateDivAB(numberA, numberB);
  resultDivAB.textContent = divAB;

  var divBA = calculateDivBA(numberA, numberB);
  resultDivBA.textContent = divBA;

  var potAB = calculatePotAB(numberA, numberB);
  resultPotAB.textContent = potAB;

  var potBA = calculatePotBA(numberA, numberB);
  resultPotBA.textContent = potBA;

  var raizA = calculateRaizA(numberA);
  resultRaizA.textContent = raizA;

  var raizB = calculateRaizB(numberB);
  resultRaizB.textContent = raizB;

  var fatA = calculateFatA(numberA);
  resultFatA.textContent = fatA;

  var fatB = calculateFatB(numberB);
  resultFatB.textContent = fatB;

  var porcAB = calculatePorcAB(numberA, numberB);
  resultPorcAB.textContent = porcAB;

  var porcBA = calculatePorcBA(numberA, numberB);
  resultPorcBA.textContent = porcBA;

  var media = calculateMedia(numberA, numberB);
  resultMedia.textContent = media;
}

start();
