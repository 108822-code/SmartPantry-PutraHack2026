# 🥗 SmartPantry-PutraHack2026 
### *Theme:FoodSecurity (Agriculture for the People)*

**Lead Developer:** Alia Sopiana anak Dundang

---

##  Project Vision
**SmartPantry** is a predictive ecosystem that bridges the gap between urban consumption and rural production. By using **IoT soil data** and **Inventory Tracking**, we eliminate food waste and guarantee income for local farmers.

* **The Problem:** "Malaysians waste too much food because we don't track our pantry, and our farmers struggle to prove their food quality."
* **The Solution:** We built a bridge. Your pantry "talks" to the soil sensors at the farm.
* **The Technology:** We use simple math to predict when you'll run out of food and IoT sensors to prove the soil is healthy.


##  Technical Architecture
> *"Think of this like **Tinder for Food**."*

1. **The User says:** "I'm almost out of Tomatoes."
2. **The Farm (UPM Plot A) says:** "My Tomatoes are perfectly ripe today."
3. **The Connection:** The app connects the two automatically. People get the freshest food, and farmers don't worry about buyers.

### Three-Tier Architecture:

#### **A. Frontend (Flutter Mobile App)**
* **Predictive Inventory:** The app tracks the "Depletion Rate" of pantry items.
* **Threshold Trigger:** A `Restock_Order` is automatically generated when any item falls below the **30% Safety Stock** level.
* **User Interface:** A high-fidelity dashboard built in Figma, transitioning to a Flutter frontend.

#### **B. Logic & Database (Firebase)**
* **Database:** Google Firebase Firestore stores real-time inventory levels and farmer crop status.
* **Matching Algorithm:** When a pantry is low, the backend runs a **Geo-Query** to find the nearest farm (within 30km) that has a "Harvest Ready" status.
* **Integration:** Connects the "Pantry Need" to the "Soil Readiness."

#### **C. Backend & IoT (Cloud Functions)**
* **Sensory Input:** Real-time **NPK Sensors** (Nitrogen, Phosphorus, Potassium) transmit soil health data via **MQTT protocol**.
* **Data Integrity:** We use **SHA-256 Hashing** to create a **"Soil Fingerprint."** This creates a digital birth certificate for the vegetable, proving its nutrient density.
* **Blockchain Simulation:** Every harvest batch ID is stored on an immutable ledger to prevent "Greenwashing."


##  Core Algorithms & Logic
To move beyond a simple shopping app, the system uses two mathematical models:

### **I. Inventory Prediction Formula**
The app calculates the **Estimated Days Remaining (EDR)**:
$$EDR = \frac{Current\_Inventory}{Average\_Daily\_Usage}$$
*If $EDR < 3$ days, the system triggers the "Auto-Restock" logic.*

### **II. Soil Health Index (SHI)**
The "Soil Fingerprint" result is calculated using a weighted nutrient balance:
$$SHI = (0.4 \cdot N) + (0.3 \cdot P) + (0.3 \cdot K)$$
*This ensures the "Rakyat" only pays for high-quality, nutrient-dense produce.*


##  Impact
* **Urban Food Security:** Reduces household food waste by **30%** through predictive ordering.
* **Farmer Empowerment:** Farmers get guaranteed sales before they even harvest, reducing "Market Anxiety."
* **Transparency:** Consumers can scan a **QR code** to see the actual soil health of their food, building trust in local UPM agriculture.


##  Design & Demo
* **LOvable Prototype:** [Click here to view the design](https://id-preview--108a6b15-f9eb-4986-9005-47f949e476d9.lovable.app/?__lovable_token=eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1c2VyX2lkIjoiZXJiRTgxRjlDUVNjMG53YUJ3Q0NxZzFUY3kwMiIsInByb2plY3RfaWQiOiIxMDhhNmIxNS1mOWViLTQ5ODYtOTAwNS00N2Y5NDllNDc2ZDkiLCJhY2Nlc3NfdHlwZSI6InByb2plY3QiLCJpc3MiOiJsb3ZhYmxlLWFwaSIsInN1YiI6IjEwOGE2YjE1LWY5ZWItNDk4Ni05MDA1LTQ3Zjk0OWU0NzZkOSIsImF1ZCI6WyJsb3ZhYmxlLWFwcCJdLCJleHAiOjE3NzUwNjA3MDYsIm5iZiI6MTc3NDQ1NTkwNiwiaWF0IjoxNzc0NDU1OTA2fQ.MCVKKPXAT3SaUm5kTiebRu6o-VtBICSSiweYZ_w7KK6x7KYjhhWk-0ehdn5KqK6fhCXb-bLy_r4NpM3BDTmYl0ioL2Gezg6Ggjn5SgfZVFJGahrnaHd3Yt_Z0jO4AQWKOHucMaAOh6i9FN35O1pAGAN3pRskGeYfo2eg-9dnrjonF2nk12Urro-dqstOV44JXwQvnS5fLyKF5ydlh886ZgejZHsdsEcB5LBZWUfMFElUUL8Yvx5u_jvazPeejQZQ4dHuPQGK36ParCNCDxOhEkO3OTLNFxb-aeA2pem8iW28PcltDszgTe-iBU8zdJYr_w_lT-s29vjIU_6ESe9nhwksOrPTJogGTxoGlx2wtuEzt5Y7cUtBLUELIdZnctWQAkfL5VlKPPaAaHZGoT78HnuDffEbNVMm_7OolQ1663C64Nkf7wYbc_Axy4Zh3ZVRgysmMKR4hKfZwSNdQBx1cCa3UZH81rJ5sV2lRmK76ZMbIBbF556wrQfTd1kEv_DbkoFFRIx2zuQsdBXPcwGtfWy5bxiOScj6IpGnfvf3kAf1DV4y5DVs1bW68Jr7SWFNuBKQHrvi3Q8pbaY4KhPMaTgp4oebbgGAZf0qLfaPNQmbqDVAuRu6zYVISGWmZeXYkqscOkiypvbiYiJY5J5JX6dr6EKnAgt7ODc8xn_FgRI)
* **Video Demo:**


https://github.com/user-attachments/assets/04c659ca-a0f0-4696-bff4-e58a365c95a4


