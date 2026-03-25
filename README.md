#  SmartPantry-PutraHack2026 
### *Theme: Pertanian Untuk Rakyat (Agriculture for the People)*

**Lead Developer:** Alia Sopiana anak Dundang


## Project Vision
**SmartPantry** is a predictive ecosystem that bridges the gap between urban consumption and rural production. By using **IoT soil data** and **Inventory Tracking**, we eliminate food waste and guarantee income for local farmers.

 **The Problem:** "Malaysians waste too much food because we don't track our pantry, and our farmers struggle to prove their food quality."
 **The Solution:** We built a bridge. Your pantry "talks" to the soil sensors at the farm.
 **The Technology:** We use simple math to predict when you'll run out of food and IoT sensors to prove the soil is healthy.



## Technical Architecture
> *"Think of this like **Tinder for Food**."*

1.  **The User says:** "I'm almost out of Tomatoes."
2.  **The Farm (UPM Plot A) says:** "My Tomatoes are perfectly ripe today."
3.  **The Connection:** The app connects the two automatically. People get the freshest food, and farmers don't worry about buyers.

### Three-Tier Architecture:
 **Frontend:** Flutter-based Mobile App.
 **Logic:** Predictive Inventory tracking. A `Restock_Order` triggers when items fall below **30% Safety Stock**.
 **Backend:** Firebase & Cloud Functions with IoT integration.
 
* **Frontend:** Flutter-based Mobile App.
 Predictive Inventory: The app tracks the "Depletion Rate" of pantry items.
 Threshold Trigger: A Restock_Order is automatically generated when any item falls below the 30% Safety Stock level.
 User Interface: A high-fidelity dashboard built in Figma, transitioning to a Flutter frontend.
 
* **Logic:** Predictive Inventory tracking. A `Restock_Order` triggers when items fall below **30% Safety Stock**.
 Database: Google Firebase Firestore stores real-time inventory levels and farmer crop status.
 Matching Algorithm: When a pantry is low, the backend runs a Geo-Query to find the nearest farm (within 30km) that has a "Harvest Ready" status for that specific crop.
 Integration: Connects the "Pantry Need" to the "Soil Readiness."
 
* **Backend:** Firebase & Cloud Functions with IoT integration.
 Sensory Input: Real-time NPK Sensors (Nitrogen, Phosphorus, Potassium) transmit soil health data via MQTT protocol.
Data Integrity: We use SHA-256 Hashing to create a "Soil Fingerprint." This creates a digital birth certificate for the vegetable, proving its nutrient density and origin.
 Blockchain Simulation: Every harvest batch ID is stored on an immutable ledger to prevent "Greenwashing" or data tampering.

 How do you know if your vegetables are actually healthy? Every farm in our system has Soil Sensors. These sensors measure the "nutrients" in the dirt (Nitrogen, Phosphorus, Potassium). When you scan the QR code on your delivery, the app shows you a "Soil Fingerprint." This is digital proof that your food grew in high-quality soil. We use Blockchain technology to make sure this data can’t be faked or changed by anyone.


## Core Algorithms & Logic
**To move beyond a simple shopping app, the system uses two mathematical models:

* **I. Inventory Prediction Formula**
 The app calculates the Estimated Days Remaining (EDR):
 $$EDR = \frac{Current\_Inventory}{Average\_Daily\_Usage}$$
 If $EDR < 3$ days, the system triggers the "Auto-Restock" logic.
  
* **II. Soil Health Index (SHI)**
 The "Soil Fingerprint" result is calculated using a weighted nutrient balance:
 $$SHI = (0.4 \cdot N) + (0.3 \cdot P) + (0.3 \cdot K)$$
 This ensures the "Rakyat" only pays for high-quality, nutrient-dense produce.


## Impact for the "buyers"
* **Urban Food Security:** Reduces household food waste by 30% through predictive ordering.
* **Farmer Empowerment:** Farmers get guaranteed sales before they even harvest, reducing "Market Anxiety."
* **Transparency:** Consumers can scan a QR code to see the actual soil health of their food, building trust in local UPM agriculture.


##  Design & Demo
* **Figma Prototype:** [Click here to view the design](https://www.figma.com/make/mcO6ed1ePDRFr8xetuECh7/PutraHack-2026-Mobile-App?t=z1yCthshLdWcvfsV-1&preview-route=%2Fsoil-fingerprint)
* **Video Demo:**
  

https://github.com/user-attachments/assets/cbed190b-4bb7-42e4-981f-148a6266cc93


