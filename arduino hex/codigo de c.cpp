int led = 13;
int interruptor = 2;

void setup() {
	pinMode(led, OUTPUT);
	pinMode(interruptor, INPUT);
}

void loop() {
	if (digitalRead(interruptor) == LOW) {
		// El interruptor está presionado, el LED se mantiene encendido
		digitalWrite(led, HIGH);
	} else {
		float x = 1.0;
		float y = 0.0000625;
		int cuenta_1ms = x / y;
		for (int cnt = 0; cnt < cuenta_1ms+1; cnt++) {
			if (cnt == cuenta_1ms - 1) {
				digitalWrite(led,HIGH);  // Prende el LED después de 1 ms
			}
		}
		for (int cnt = 0; cnt < cuenta_1ms+1; cnt++) {
			if (cnt == cuenta_1ms - 1) {
				digitalWrite(led,LOW);  // Apaga el LED después de 1 ms
			}
		}
	}
}

