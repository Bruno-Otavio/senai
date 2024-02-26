// import { StatusBar } from 'expo-status-bar';
// import { StyleSheet, Text, View } from 'react-native';
import { NavigationContainer } from '@react-navigation/native';
import {createNativeStackNavigator} from '@react-navigation/native-stack';

const Stack = createNativeStackNavigator();

export default function App() {
  return (
    <NavigationContainer>
      <Stack.Navigator>
        <Stack.Screen
          name="telaIMC"
          component={ScreenIMC}
          options={{title: "Calcule seu IMG"}}
        />
      </Stack.Navigator>
    </NavigationContainer>
  );
}

