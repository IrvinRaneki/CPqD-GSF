import time
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.common.exceptions import TimeoutException


def init_driver():
    driver = webdriver.Firefox()
    driver.wait = WebDriverWait(driver, 5)
    return driver


def lookup(driver, data):
    ra="081641"
    nome="Irvin Rodrigo Gomes"
    email="irvin.alemao@gmail.com"
    motivo="Estágio / Bolsa"

    http="https://docs.google.com/forms/d/1N3RHDZDFuXoSHU5TWuAfYYSGeUCqEPeAJZYJ3FLU69g/viewform?formkey=dEQwUWtDNm81Z0hnQnpfay1NUGhZUlE6MQ&fromEmail=true"
    driver.get(http)

    try:
        box1 = driver.wait.until(EC.presence_of_element_located((By.NAME, "entry.1000000")))
        box1.send_keys(ra)
        box2 = driver.wait.until(EC.presence_of_element_located((By.NAME, "entry.1000001")))
        box2.send_keys(nome)
        box3 = driver.wait.until(EC.presence_of_element_located((By.NAME, "entry.1000003")))
        box3.send_keys(email)
        box4 = driver.wait.until(EC.presence_of_element_located((By.NAME, "entry.1000005")))
        box4.send_keys(motivo)
        box5 = driver.wait.until(EC.presence_of_element_located((By.NAME, "entry.1000008")))
        box5.send_keys(data)
        box6 = driver.wait.until(EC.presence_of_element_located((By.NAME, "entry.1000006")))
        box6.click()
        box7 = driver.wait.until(EC.presence_of_element_located((By.NAME, "entry.1000007")))
        box7.click()
        box8 = driver.wait.until(EC.presence_of_element_located((By.NAME, "submit")))
        box8.click()
    except TimeoutException:
        print("Nao foi")


if __name__ == "__main__":

    for ano in range(2015,2016):
        for mes in range(12,13):
            for dia in range(1,32):
                data=str(dia)+"/"+str(mes)+"/"+str(ano)
                print('',data)
                driver = init_driver()
                lookup(driver, data)
                time.sleep(1)
                driver.quit()